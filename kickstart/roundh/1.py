'''
limit the f string as an idea
'''

def binarysearch(arr, x):

    if (x <= arr[0]):
        return arr[0]
    if (x >= arr[-1]):
        return arr[-1]

    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == x:
            return arr[mid]
        elif arr[mid] < x:
            if (mid < len(arr) - 1 and arr[mid + 1] > x):
                if (abs(x - arr[mid] >= abs(x - arr[mid + 1]))):
                    return arr[mid + 1]
                else:
                    return arr[mid]
            low = mid + 1
        else:
            if (mid > 0 and arr[mid - 1] < x):
                if (abs(x - arr[mid] >= abs(x - arr[mid - 1]))):
                    return arr[mid - 1]
                else:
                    return arr[mid]
            high = mid - 1
    return arr[mid]

def calc(s, f):
    f = list(map(lambda x: ord(x) - ord('a'), sorted(f)))
    count = 0
    for letter in s:
        bsearch = binarysearch(f, ord(letter) - ord('a'))
        closestlocation = ord(chr(bsearch + ord('a')))
        jump = abs(ord(letter) - closestlocation)
        if (abs(ord(letter) - closestlocation) > 13):
            jump = 25 - jump
        count += jump
    return count


def solve():
    cases = int(input())
    case = 1

    for i in range(cases):
        s = str(input())
        f = str(input())

        print("Case #" + str(case) + ": " + str(calc(s, f))) # add answer whatever you need to print
        case += 1


if __name__ == "__main__":
    solve()