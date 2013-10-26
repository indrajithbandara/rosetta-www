<audio controls="controls" height="50" preload="none" width="200">
	<source src="http://rosetta.fileformat.info/format/mp3/<%= @item[:slug] %>.mp3" type="audio/mpeg" />
	<source src="http://rosetta.fileformat.info/format/ogg/<%= @item[:slug] %>.ogg" type="audio/ogg" />
	<embed height="50" width="200" src="http://rosetta.fileformat.info/format/mp3/<%= @item[:slug] %>.mp3" />
</audio>
