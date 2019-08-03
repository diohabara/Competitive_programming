n = gets.to_i
ans = 1
while true
  if ans**2 <= n && n < (ans + 1)**2
    puts ans
    break
  end
  ans += 1
end
