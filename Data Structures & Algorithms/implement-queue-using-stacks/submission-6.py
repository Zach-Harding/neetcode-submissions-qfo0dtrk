class MyQueue:
    a = []
    b = []

    def __init__(self):
        self.a = []
        self.b = []

    def push(self, x: int) -> None:
        self.a.append(x)
        self.b.append(self.a.pop())

    def pop(self) -> int:
        retval = self.peek()
        print("popping: ", retval)
        del self.b[0]
        return retval

    def peek(self) -> int:
        print("peek: ", self.b[0])
        return self.b[0]

    def empty(self) -> bool:
        if len(self.b) == 0:
            return True
        return False


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()