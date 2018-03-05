def is_palindrome(number):
  str_number = str(number)
  return str_number == ''.join(reversed(list(str_number)))

def total_base(until):
  total = 0
  b = 1
  while b < until:
    if is_palindrome(b) and is_palindrome(bin(b)[2:]):
      total += b

    b += 1

  return total

print total_base(1000000)
