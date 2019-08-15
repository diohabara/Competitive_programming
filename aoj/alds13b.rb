# frozen_string_literal: true

queue = []
arrp = []
arrn = []
n, q = gets.split
n = n.to_i
(0..n).each do
  p, time = gets.split
  time = split
  # queue.rb
  s = STDIN.gets.split
  n = s[0].to_i
  q = s[1].to_i
  queue = Array.new(n)
  name = Array.new(n)
  time = Array.new(n) 

  0.upto(n - 1) do |i|
    s = STDIN.gets.split
    queue[i] = i
    name[i] = s[0].to_s
    time[i] = s[1].to_i
  end

  qp = 0
  elapsed = 0
  while n > 0
    top = queue[qp]
    if time[top] <= q
      elapsed += time[top]
      printf("%s %d\n", name[top], elapsed)
      n -= 1
    else
      elapsed += q
      time[top] -= q
      queue << top
    end
    qp += 1
  end
end
