n = gets.to_i
arr = gets.chomp.split.map(&:to_i)
puts arr.join(" ")

1.upto(n -1){ |i|
  cur = arr[i]
  j = i-1
  while j >= 0 && cur < arr[j]
    arr[j+1] = arr[j]
    j -= 1
  end
  arr[j+1] = cur
  puts arr.join(" ")
}