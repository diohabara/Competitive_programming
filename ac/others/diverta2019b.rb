r, g, b, n = gets.split.map(&:to_i)
cnt = 0
(0..n/r).each { |i|
  (0..n/g).each { |j|
    cnt += 1 if ((n - (i * r + j * g)) %  b).zero? && n-(i * r + j * g) >= 0
  }
}
puts cnt