<div class="row">
	<div class="col-md-12" style="vertical-align:middle;">
		<div class="pull-right">
			<% if has_previous(@item) %>
			<a class="btn btn-default btn-sm" href="<%=post_previous(@item).path%>">
			<% else %>
				<a class="btn btn-default btn-sm disabled" href="#" onclick="return false;">
			<% end %>
			<small><i class="fa fa-chevron-left"></i></small> Previous</a>
			<% if has_next(@item) %>
			<a class="btn btn-default btn-sm" href="<%=post_next(@item).path%>">
			<% else %>
				<a class="btn btn-default btn-sm disabled" href="#" onclick="return false;">
			<% end %>
			Next <small><i class="fa fa-chevron-right"></i></small></a>
		</div>
		<h3><%=h item[:title] %></h3>
		<% if item[:draft] %><div class="alert alert-warning alert-block"><h4>Draft</h4>
		This entry is incomplete, unlicensed, or otherwise not ready for use.
		</div><% end %>
	</div>
</div>

