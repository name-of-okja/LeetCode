class MyHashMap:

    def __init__(self):
        self.size = 1000001
        self.arr = [-1] * self.size

    def put(self, key: int, value: int) -> None:
        self.arr[key] = value

    def get(self, key: int) -> int:
        return self.arr[key]

    def remove(self, key: int) -> None:
        self.arr[key] = -1


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)