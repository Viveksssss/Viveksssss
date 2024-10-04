from manim import *
class Try(Scene):
    def construct(self):
        ax = Axes(x_range=(-3,3),y_range=(-3,3))
        curve = ax.plot(lambda x: (x+2)*x*(x-2)/2, color=RED)
        area = ax.get_area(curve, x_range=(-2,2), color=BLUE)
        self.play(Create(ax, run_time=2))
        self.play(Create(curve, run_time=2))
        self.play(FadeIn(area, run_time=2))
        self.wait(2)

class SquareToCircle(Scene):
    def construct(self):
        square = Square(color=BLUE,fill_opacity=0.5)
        self.play(DrawBorderThenFill(square))
        circle =Circle(color=RED, fill_opacity=0.5)
        self.play(Transform(square, circle))
        self.play(Indicate(square, color=RED))
        self.wait(2)
        # self.play(FadeOut(circle))#althought square is transformed to circle,the mobject in screen still remains as square,so we need to fadeout the sauare to remove it from screen.
        # or use ReplacementTransform(square, circle) to replace square with circle,then we don't need to fadeout square.instead,we can fadeout circle.
        self.play(FadeOut(square))

class Position(Scene):
    def construct(self):
        plane = NumberPlane()
        self.add(plane)
        dot = Dot(color = RED)
        green_dot = Dot(color = GREEN)
        green_dot.next_to(dot, RIGHT+UP, buff=0.5)
        self.add(dot, green_dot)
        

        