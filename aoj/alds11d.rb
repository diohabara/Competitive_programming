# frozen_string_literal: true

n = gets.to_i
arr = n.times.map { gets.to_i }

min_v = arr[0]
max_p = -1e9
(1...n).each do |i|
  max_p = [max_p, arr[i] - min_v].max
  min_v = [min_v, arr[i]].min
end

p max_p
