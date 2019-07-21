$cnt = 0
def insertion_sort(arr, n, g)
  (g...n).each {|i|
    v = arr[i]
    j = i - g
    while j >= 0 && arr[j] > v
      arr[j + g] = arr[j]
      j = j - g
      $cnt += 1
    end
    arr[j + g] = v
  }
end

def shell_sort(arr, n)
  $cnt = 0

  g = []
  interval = 1
  while interval <= n
    g << interval
    interval = 3 * interval + 1
  end
  g.reverse!
  m = g.size
  puts m
  puts g.join(" ")
  (0...m).each {|i|
    insertion_sort(arr, n, g[i])
  }
end

n = gets.to_i
arr = n.times.map{gets.to_i}
shell_sort(arr, n)
puts $cnt
puts arr