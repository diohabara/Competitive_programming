def bubble_sort(c, n)
  (0...n).each { |i|
    (n - 1).downto(i + 1) { |j|
      c[j], c[j - 1] = c[j - 1], c[j] if c[j][1] < c[j - 1][1]
    }
  }
  c
end

def selection_sort(c, n)
  (0...n).each { |i|
    minj = i
    (i...n).each { |j|
      minj = j if c[j][1] < c[minj][1]
    }
    c[i], c[minj] = c[minj], c[i] if minj != i
  }
  c
end

n = gets.to_i
arr = gets.chomp.split
b_arr = bubble_sort(arr.dup, n)
s_arr = selection_sort(arr.dup, n)

puts b_arr.join(' ')
puts 'Stable'
puts s_arr.join(' ')
if b_arr == s_arr
  puts 'Stable'
else
  puts 'Not stable'
end
