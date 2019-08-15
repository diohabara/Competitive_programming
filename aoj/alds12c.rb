# frozen_string_literal: true

def bubble_sort(a, n)
  (0...n).each do |i|
    (n - 1).downto(i + 1) do |j|
      a[j], a[j - 1] = a[j - 1], a[j] if a[j][1] < a[j - 1][1]
    end
  end
  a
end

def selection_sort(a, n)
  (0...n).each do |i|
    minj = i
    (i...n).each do |j|
      minj = j if a[j][1] < a[minj][1]
    end
    a[i], a[minj] = a[minj], a[i] if minj != i
  end
  a
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
