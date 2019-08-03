$cnt = 0

def selection_sort(arr, n)
  (0...n).each { |i|
    minj = i
    (i...n).each { |j|
      minj = j if arr[j] < arr[minj]
    }
    arr[i], arr[minj] = arr[minj], arr[i]
    $cnt += 1 if i != minj
  }
  arr
end

n = gets.to_i
arr = gets.split.map(&:to_i)
ans = selection_sort(arr, n)
puts ans.join(" ")
puts $cnt
