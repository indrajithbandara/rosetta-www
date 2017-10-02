<div class="row">
	<div class="col-md-12" style="vertical-align:middle;">
		<div class="pull-right">
			{% if page.previous.url %}
			<a class="btn btn-default btn-sm" href="{{page.previous.url}}">
			{% else %}
				<a class="btn btn-default btn-sm disabled" href="#" onclick="return false;">
			{% endif %}
			<small><i class="fa fa-chevron-left"></i></small> Previous</a>
			{% if page.next.url %}
			<a class="btn btn-default btn-sm" href="{{page.next.url}}">
			{% else %}
				<a class="btn btn-default btn-sm disabled" href="#" onclick="return false;">
			{% endif %}
			Next <small><i class="fa fa-chevron-right"></i></small></a>
		</div>
		<h3>{{ page.title }}</h3>
		{% if page.draft %}<div class="alert alert-warning alert-block"><h4>Draft</h4>
		This entry is incomplete, unlicensed, or otherwise not ready for use.
		</div>{% endif %}
	</div>
</div>

