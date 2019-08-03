n = gets.to_i
arr = gets.split.map(&:to_i)
(0...n).each { |i| 
  cnt = 0
  (0..i).each { |j| 
    cnt += arr[
  }
  puts cnt
}