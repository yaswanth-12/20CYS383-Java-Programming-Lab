class stack1():
    def __init__(self, mx):
        self.qwe = []
        self.size = 0
        self.max_size = mx

    def push(self, value):
        if (len(self.qwe) < self.max_size):
            self.size += 1
            self.qwe.append(value)
        else:
            print("The stack is full")

    def pop(self):
        if len(self.qwe) > 0:
            self.qwe.pop()
        else:
            print("Stack empty")

    def top(self):
        print("The element on top: ", self.qwe[len(self.qwe)-1])

    def size(self):
        print(len(self.qwe))

    def isEmpty(self):
        if self.qwe:
            pass
        else:
            print("The stack is empty")

    def output(self):
        print(self.qwe)


v = stack1(3)
v.push("sbcsj")
v.push("ksjbck")
v.push("iscksd")
v.push("schduk")
v.top()
v.output()
