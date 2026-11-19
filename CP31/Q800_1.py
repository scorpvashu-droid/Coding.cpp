testcase=int(input())
for i in range(testcase):
    length,ops=map(int, input().split())

    numbers=list(map(int, input().split()))

    numbers2=numbers.copy()
    numbers2.sort()
    if_sorted=numbers2==numbers

    if if_sorted:
        print("YES")
    else:
        if ops>1:
            print("YES")
        else:
            print("NO")
