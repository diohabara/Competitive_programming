# frozen_string_literal: true

$cnt = 0
def bubble_sort(arr, n)
  flag = true
  while flag
    flag = false
    (1..n - 1).reverse_each do |i|
      next unless arr[i] < arr[i - 1]

      arr[i], arr[i - 1] = arr[i - 1], arr[i]
      flag = true
      $cnt += 1
    end
  end
  arr
end

n = gets.to_i
arr = gets.split.map(&:to_i)
ans = bubble_sort(arr, n)
puts ans.join(' ')
puts $cnt
