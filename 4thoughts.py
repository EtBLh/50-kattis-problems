operators = ['+', '-', '*', '//']
values = {}

for a in operators:
    for b in operators:
        for c in operators:
            exp = f"4 {a} 4 {b} 4 {c} 4"
            value = eval(exp)
            values[value] = exp.replace('//', '/') + f" = {value}"

if __name__ == '__main__':
    num = int(input())
    for i in range(0, num):
        _num = int(input())
        if _num not in values:
            print("no solution")
        else:
            print(values[_num])