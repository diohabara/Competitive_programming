N, M, K = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)

if N < M
  puts "X"
elsif N > M
  puts "Y"
else
  i = 0
  loop do
    if a[i] < b[i]
      puts "X"
      break
    elsif a[i] > b[i]
      puts "Y"
      break
    end
    i += 1
    if i == N
      puts "Same"
      break
    end
  end
end