def gcd(x, y)
  if x < y
    t = x
    x = y
    y = t
  end
  if y == 0
    return x
  else
    r = x % y
    gcd(y, r)
  end
end

x, y = gets.split.map(&:to_i)
puts gcd(x, y)
