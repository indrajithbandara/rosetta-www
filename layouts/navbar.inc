<div class="header">
	<ul class="nav nav-pills pull-right">
		<li<% if @item.path == '/' %> class="active"<% end %>><a href="/index.html"><i class="fa fa-home"></i>
<span class="hidden-xs"> Home</span></a></li>
		<li<% if @item.path == '/support/faq.html' %> class="active"<% end %>><a href="/support/faq.html"><i class="fa fa-info-circle"></i>
<span class="hidden-xs"> FAQ</span></a></li>
		<li<% if @item.path and @item.path.start_with? '/files/' %> class="active"<% end %>><a href="/files/index.html"><i class="fa fa-th-list"></i>
<span class="hidden-xs"> Files</span></a></li>
		<li<% if @item.path == '/support/contact.html' %> class="active"<% end %>><a href="/support/contact.html"><i class="fa fa-comment"></i>
<span class="hidden-xs"> Contact</a></li>
	</ul>
	<h3 class="text-muted"><a href="/index.html" style="color:inherit;text-decoration:none;">The Digital Rosetta Stone</a></h3>
</div>
