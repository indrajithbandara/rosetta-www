<div class="row-fluid">
	<div class="span12" style="vertical-align:middle;">
		<div class="pull-right">
			<% if has_previous(@item) %>
			<a class="btn btn-small" href="<%=post_previous(@item).path%>">
			<% else %>
				<a class="btn btn-small disabled" href="#" onclick="return false;">
			<% end %>
			<small><i class="icon-chevron-left"></i></small> Previous</a>
			<% if has_next(@item) %>
			<a class="btn btn-small" href="<%=post_next(@item).path%>">
			<% else %>
				<a class="btn btn-small disabled" href="#" onclick="return false;">
			<% end %>
			Next <small><i class="icon-chevron-right"></i></small></a>
		</div>
		<h3><%=h item[:title] %></h3>
		<% if item[:draft] %><div class="alert alert-warning alert-block"><h4>Draft</h4>
		This entry is incomplete, unlicensed, or otherwise not ready for use.
		</div><% end %>
	</div>
</div>

