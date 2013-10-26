module PostNavigation

	def has_next(target, items=nil)
		items = @items if items.nil?
		items.each do |item|
			next if item[:slug].nil?

			if item[:filename] > target[:filename]
				return true
			end
		end
		return false
	end

	def has_previous(target, items=nil)
		items = @items if items.nil?
		items.each do |item|
			next if item[:slug].nil?

			if item[:filename] < target[:filename]
				return true
			end
		end
		return false
	end

	def post_next(target, items=nil)
		items = @items if items.nil?
		retval = nil
		#puts "checking next target: #{target[:filename]}"
		items.each do |item|
			next if item[:slug].nil?

			#puts "checking #{item[:filename]}"

			if (retval.nil? or item[:filename] < retval[:filename]) and item[:filename] > target[:filename]
				#puts "selected"
				retval = item
			end
		end
		#puts "returning #{retval[:filename]}"
		return retval
	end

	def post_previous(target, items=nil)
		items = @items if items.nil?
		retval = nil
		items.each do |item|
			next if item[:slug].nil?

			if (retval.nil? or item[:filename] > retval[:filename]) and item[:filename] < target[:filename]
				retval = item
			end
		end
		return retval
	end

end

include PostNavigation