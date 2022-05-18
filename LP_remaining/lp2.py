class Node:
    def __init__(self,data,level,fval):
        self.data = data
        self.level = level
        self.fval = fval

    def generate_child(self):
        x,y = self.find(self.data,'_')
        children=[]
        val_list = [[x,y+1],[x+1,y],[x-1,y],[x,y-1]]
        for i in val_list:
            child = self.shuffel(x,y,i[0],i[1])
            if child is not None:
                child_node = Node(child, self.level + 1, 0)
                children.append(child_node)
        return children


    def shuffel(self,x,y,x1,y1):
        if(x1>=0 and y1>=0 and x1<len(self.data) and y1<len(self.data)):
            tump_puz = []
            tump_puz = self.copy(self.data)
            tump_puz[x][y],tump_puz[x1][y1] = tump_puz[x1][y1],tump_puz[x][y]
            return tump_puz
        else:
            return None


    def copy(self,root):
        temp = []
        for i in root:
            t=[]
            for j in i:
                t.append(j)
            temp.append(t)
        return temp

    def find(self,data,a):
        for i in range(0,len(self.data)):
            for j in range(0,len(self.data)):
                if(data[i][j]==a):
                    return i, j
                
class Puzzle:
    def __init__(self, size):
        self.n = size
        self.open = []
        self.closed = []

    def accept(self):
        puz = []
        for i in range(0, self.n):
            temp = input().split(" ")
            puz.append(temp)
        return puz

    def f(self, start, goal):
        return self.h(start.data, goal) + start.level

    def h(self, start, goal):
        temp = 0
        for i in range(0, self.n):
            for j in range(0, self.n):
                if start[i][j] != goal[i][j] and start[i][j] != '_':
                    temp += 1
        return temp

    def process(self):
        print("Enter the start state matrix \n")
        start = self.accept()
        print(start)
        print("Enter the goal state matrix \n")
        goal = self.accept()

        start = Node(start, 0, 0)
        start.fval = self.f(start, goal)
        print(start)
        self.open.append(start)
        print("\n\n")
        while True:
            cur = self.open[0]
            print("")
            print("  | ")
            print("  | ")
            print(" \\\'/ \n")
            for i in cur.data:
                for j in i:
                    print(j, end=" ")
                print("")
            if (self.h(cur.data, goal) == 0):
                break
            for i in cur.generate_child():
                i.fval = self.f(i, goal)
                self.open.append(i)
            self.closed.append(cur)
            del self.open[0]
            self.open.sort(key=lambda x: x.fval)

    

# puz = Puzzle(3)
# puz.process()
puz = Puzzle(3)
puz.process()
