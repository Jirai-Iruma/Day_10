def key_Word(the_second, the_first):
    final= the_first - the_second;
    return final;

def main():
    x= int(input("Give a value for x \n"))
    y= int(input("Give a value for y \n"))
    result = key_Word(the_first= x, the_second= y)
    print(f"The result is {result}")

if __name__ == "__main__":
    main()