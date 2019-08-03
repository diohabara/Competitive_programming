n = gets
even_num = 0
odd_num = 0
-1.step(-n.size, -2) { |i|
  even_num += n[i].to_i
}
-2.step(-n.size, -2) { |i|
  odd_num += n[i].to_i
}

puts (odd_num - even_num) % 11