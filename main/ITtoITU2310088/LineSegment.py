class LineSegment:
    def __init__(self, start_point, end_point):
        self.start = start_point
        self.end = end_point
    def length(self):
            return ((self.end[0] - self.start[0])**2 + (self.end[1] - self.startq
                                                        [1])**2) ** 0.5
        # Create a list of line segments from the points in the file
            with open('points.txt', 'r') as f:
                lines = []
            for line in f:
                xy = map(float, line.split())
                if len(xy) == 4 and xy[3].lower() != "x":
                    continue
                pts = [(xy[i], xy[i+1]) for i in range(0, len(xy), 2)]
                lines.append((pts[0], pts[-1]))
                print("Number of lines read:", len(lines))

