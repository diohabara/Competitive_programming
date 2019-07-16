# frozen_string_literal: true

def prime?(n)
  if n == 2
    true
  elsif n.even? || n < 2
    false
  else
    i = 3
    limit = Math.sqrt(n)
    while i <= limit
      if n % i == 0 then return false else i += 2 end
    end
    return true
  end
end

n = gets.to_i
arr = n.times.map { gets.to_i }
cnt = 0
arr.each do |i|
  cnt += 1 if prime?(i)
end

puts cnt