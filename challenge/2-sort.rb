result = []

ARGV.each do |arg|
  next unless arg =~ /^-?\d+$/
  num = arg.to_i

  inserted = false
  result.each_with_index do |val, idx|
    if num < val
      result.insert(idx, num)
      inserted = true
      break
    end
  end

  result << num unless inserted
end

puts result

