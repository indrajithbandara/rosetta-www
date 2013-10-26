# from https://github.com/telemachus/ithaca/blob/master/lib/argh.rb

class Argh < Nanoc::Filter
  identifier :argh

  def run(content, params={})
    content.gsub("&#39;", "'").gsub('&quot;', '"')
  end
end