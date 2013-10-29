<% if @item[:draft] or @item[:noindex] %>	<meta name="robots" content="NOINDEX" />
<% end %>	<meta content="width=device-width, initial-scale=1.0" name="viewport" />
	<link href="http://fonts.googleapis.com/css?family=Open+Sans:400,400italic,700,700italic" rel="stylesheet" type="text/css" />
	<link type="text/css" rel="stylesheet" href="/css/bootstrap.css" />
	<link type="text/css" rel="stylesheet" href="/css/font-awesome.css" />
	<style type="text/css">
	/* Space out content a bit */
	body {
	padding-top: 20px;
	padding-bottom: 20px;
	}

	/* Everything but the jumbotron gets side spacing for mobile first views */
	.header,
	.marketing,
	.footer {
	padding-left: 15px;
	padding-right: 15px;
	}

	/* Custom page header */
	.header {
	border-bottom: 1px solid #e5e5e5;
	}
	/* Make the masthead heading the same height as the navigation */
	.header h3 {
	margin-top: 0;
	margin-bottom: 0;
	line-height: 40px;
	padding-bottom: 19px;
	}

	/* Custom page footer */
	.footer {
	padding-top: 19px;
	color: #777;
	border-top: 1px solid #e5e5e5;
	}

	/* Customize container */
	@media (min-width: 768px) {
		.container {
		max-width: 730px;
		}
	}
	.container-narrow > hr {
	margin: 30px 0;
	}

	/* Main marketing message and sign up button */
	.jumbotron {
	text-align: center;
	border-bottom: 1px solid #e5e5e5;
	}
	.jumbotron .btn {
	font-size: 21px;
	padding: 14px 24px;
	}

	/* Supporting marketing content */
	.marketing {
	margin: 40px 0;
	}
	.marketing p + h4 {
	margin-top: 28px;
	}

	/* Responsive: Portrait tablets and up */
	@media screen and (min-width: 768px) {
		/* Remove the padding we set earlier */
		.header,
		.marketing,
		.footer {
		padding-left: 0;
		padding-right: 0;
		}
		/* Space out the masthead */
		.xheader {
		margin-bottom: 30px;
		}
		/* Remove the bottom border on the jumbotron for visual effect */
		.jumbotron {
		border-bottom: 0;
		}
	}

	@media (min-width: 1024px) {
		.container {
		max-width: 970px;
		}
	}

	h1, h2, h3, h4 { font-weight: bold }

	.drs-entry-row {
		  cursor: pointer;
	}

	#drs-download {
		  margin: 10px 0px;
		  text-align: center;
	}

	.inverse {
		background-color: #222222;
		color:#ccc;
	}

	ul.nav-tabs {
		padding-top: 10px;
		margin-bottom: 10px;
	}
</style>

