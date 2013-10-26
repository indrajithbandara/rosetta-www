<div class="masthead">
	<ul class="nav nav-pills pull-right">
		<li<% if @item.path == '/' %> class="active"<% end %>><a href="/index.html">Home</a></li>
		<li<% if @item.path == '/support/faq.html' %> class="active"<% end %>><a href="/support/faq.html">FAQ</a></li>
		<li<% if @item.path and @item.path.start_with? '/files/' %> class="active"<% end %>><a href="/files/index.html">Files</a></li>
		<li<% if @item.path == '/support/contact.html' %> class="active"<% end %>><a href="/support/contact.html">Contact</a></li>
	</ul>
	<h3 class="muted"><a href="/index.html" style="color:inherit;text-decoration:none;">The Digital Rosetta Stone</a></h3>
</div>
<hr>
