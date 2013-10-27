<script type="text/javascript" src="/js/properties.js"></script>
<script type="text/javascript">
	$(document).ready( function() {
		$.ajax({
			dataType: "text",
			error: function(xhr, status, error)
				{
					$("#drs-metadata").empty().append($("<div>").addClass("alert alert-error").text(status + ": " + error));
					$("#drs-changelog").empty().append($("<div>").addClass("alert alert-error").text(status + ": " + error));
				},
			success:  function(data) { displayMetadata(parseProperties(data));},
			timeout: 10000,
			type: "GET",
			url: "http://key.fileformat.info/<%=h item[:filename][15..18]%>-<%=h item[:slug] %>.properties"
		});
	});

	function displayMetadata(metadata)
	{
		var metatable = $("<table>").addClass("table table-bordered table-striped");
		var logtable = $("<table>").addClass("table table-bordered table-striped");

		for (var key in metadata)
		{
			var row = $("<tr>");
			row.append($("<td>").text(key));
			var value = metadata[key];
			if (value.match(/^https?:\/\//))
			{
				row.append($("<td>").append($("<a>").attr("href", value).text(value)));
			}
			else
			{
				row.append($("<td>").text(value));
			}
			if (key.match(/^changelog-/))
			{
				logtable.append(row);
			}
			else
			{
				metatable.append(row);
			}
		}
		$("#drs-metadata").empty().append(metatable);
		$("#drs-changelog").empty().append(logtable);

		var size = parseInt(metadata["size"], 10);
		if (size > 1024 * 1024 * 1024)
		{
			size = (size / (1024 * 1024 * 1024)).toFixed(1) + "GB";
		}
		else if (size > 1024 * 1024)
		{
			size = (size / (1024 * 1024)).toFixed(1) + "MB";
		}
		else if (size > 1024)
		{
			size = (size / 1024).toFixed(1) + "KB";
		}

		$("#drs-download").append($("<a>").addClass("btn").addClass("btn-default").attr("href", "http://key.fileformat.info/<%=h item[:filename][15..18]%>-<%=h item[:slug]%>." + metadata["extension"]).text("Download (" + metadata["extension"] + ": " + size + ")"));
	}

</script>
<div class="row">
	<div class="col-md-12">
		<h3>Metadata <small><a href="/support/metadata.html"><i class="icon-question-sign"></i></a></small></h3>
		<div id="drs-metadata">
			<p>Loading, please wait...</p>
		</div>
		<h3>Change Log</h3>
		<div id="drs-changelog">
			<p>Loading, please wait...</p>
		</div>
	</div>
</div>
