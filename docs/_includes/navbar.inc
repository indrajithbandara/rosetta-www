<div class="header">
	<ul class="nav nav-pills pull-right">
		<li{% if page.url == '/index.html' or page.url == '/' %} class="active"{% endif %}><a href="/index.html"><i class="fa fa-home"></i>
<span class="hidden-xs"> Home</span></a></li>
		<li{% if page.url == '/support/faq.html' or page.url == '/support/faq' %} class="active"{% endif %}><a href="/support/faq.html"><i class="fa fa-info-circle"></i>
<span class="hidden-xs"> FAQ</span></a></li>
		<li{% if page.url > '/files' and page.url < '/files0' %} class="active"{% endif %}><a href="/files/index.html"><i class="fa fa-th-list"></i>
<span class="hidden-xs"> Files</span></a></li>
		<li{% if page.url == '/support/contact.html' or page.url == '/support/contact' %} class="active"{% endif %}><a href="/support/contact.html"><i class="fa fa-comment"></i>
<span class="hidden-xs"> Contact</a></li>
	</ul>
	<h3 class="text-muted"><a href="/index.html" style="color:inherit;text-decoration:none;">The Digital Rosetta Stone</a></h3>
</div>
