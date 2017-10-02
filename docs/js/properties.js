/*
 * parse a java-style properties file
 *
 * loosely based on http://code.google.com/p/jquery-i18n-properties/source/browse/trunk/jquery.i18n.properties.js
 */
function parseProperties(data)
{
	var result = {}
	var parsed = '';
	var parameters = data.split( /\n/ );
	var unicodeRE = /(\\u.{4})/ig;
	for (var i = 0; i < parameters.length; i++)
	{
		parameters[i] = parameters[i].replace( /^\s\s*/, '' ).replace( /\s\s*$/, '' ); // trim
		if (parameters[i].length == 0 || parameters[i].match("^#") == "#") // skip comments
		{
			continue;
		}
		var pair = parameters[i].split('=');
		if (pair.length == 0)
		{
			continue;
		}

		// Process key & value
		var name = unescape(pair[0]).replace( /^\s\s*/, '' ).replace( /\s\s*$/, '' ); // trim
		var value = pair.length == 1 ? "" : pair[1];

		// Put values with embedded '='s back together
		for(var s=2;s<pair.length;s++)
		{
			value += '=' + pair[s];
		}

		// process multi-line values
		while (value.match(/\\$/) == "\\")
		{
				value = value.substring(0, value.length - 1);
				value += parameters[++i].replace( /\s\s*$/, '' ); // right trim
		}

		value = value.replace( /^\s\s*/, '' ).replace( /\s\s*$/, '' ); // trim

		var unicodeMatches = value.match(unicodeRE);
		if(unicodeMatches)
		{
			for(var u=0; u<unicodeMatches.length; u++)
			{
				value = value.replace( unicodeMatches[u], unescapeUnicode(unicodeMatches[u]));
			}
		}
		result[name] = value;
	}
	return result;
}

/** Unescape unicode chars ('\u00e3') */
function unescapeUnicode(str) {
  // unescape unicode codes
  var codes = [];
  var code = parseInt(str.substr(2), 16);
  if (code >= 0 && code < Math.pow(2, 16)) {
	 codes.push(code);
  }
  // convert codes to text
  var unescaped = '';
  for (var i = 0; i < codes.length; ++i) {
	unescaped += String.fromCharCode(codes[i]);
  }
  return unescaped;
}

