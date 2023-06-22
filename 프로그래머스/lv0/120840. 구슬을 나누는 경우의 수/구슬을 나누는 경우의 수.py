def f(n):
    if n == 0 or n == 1:
        return 1
    return n * f(n - 1)

def solution(balls, share):
    return f(balls) / (f(balls - share) * f(share))