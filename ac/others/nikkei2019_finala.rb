n = gets.to_i
arr = gets.split.map(&:to_i)
(1..n).each { |i|
  ans = 0
  sum = 0
  n.times {|j|
    sum += arr[j]
    sum -= arr[j-i] if j - i >= 0
    ans = sum if ans < sum
  }
  puts ans
}