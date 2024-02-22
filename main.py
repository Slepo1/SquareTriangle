import matplotlib.patches
import matplotlib.path
import matplotlib.pyplot as plt
from matplotlib.lines import Line2D
import array


def drawPolygons(axes):
    """
    Рисование многоугольника
    """
    polygon_1 = matplotlib.patches.Polygon([(0, -0.75),
                                            (0, -1.25),
                                            (0.5, -1.25),
                                            (1, -0.75)])
    axes.add_patch(polygon_1)
    plt.text(0.6, -0.7, "Polygon", horizontalalignment="center")

    polygon_2 = matplotlib.patches.Polygon([(-0.5, 0),
                                            (-1, -0.5),
                                            (-1, -1),
                                            (-0.5, -1)],
                                           fill=False,
                                           closed=False)
    axes.add_patch(polygon_2)
    plt.text(-1.0, -0.1, "Polygon", horizontalalignment="center")


def drawRect(axes):
    """
    Рисование повернутого прямоугольника
    """
    rect_coord = (-1.5, 1)
    rect_width = 0.5
    rect_height = 0.3
    rect_angle = 30

    rect = matplotlib.patches.Rectangle(rect_coord,
                                        rect_width,
                                        rect_height,
                                        rect_angle,
                                        color="g")
    axes.add_patch(rect)
    plt.text(-1.5, 1.5, "Rect", horizontalalignment="center")


def drawPath(axes):
    
    f = open('Coordinate.txt')
    string = ''
    string = f.read()
    print(string)
    vertices = [(string[0], string[1]), (string[2], string[3]), (string[4], string[5]), (string[0], string[1])] #те самые значения из файла
    codes = [matplotlib.path.Path.MOVETO,
             matplotlib.path.Path.LINETO,
             matplotlib.path.Path.LINETO,
             matplotlib.path.Path.LINETO,
             ]

    path = matplotlib.patches.Path(vertices, codes)
    path_patch = matplotlib.patches.PathPatch(path, fill=False)
    axes.add_patch(path_patch)

    plt.text(1.5, -1.75, "Path", horizontalalignment="center")


if __name__ == "__main__":
    plt.xlim(0, 10)
    plt.ylim(0, 10)
    plt.grid()

    # Получим текущие оси
    axes = plt.gca()
    axes.set_aspect("equal")

    #drawLine(axes)
    #drawPolygons(axes)
    drawPath(axes)
    #drawRect(axes)
    #drawCircles(axes)
    #drawArc(axes)
    #drawArrow(axes)

    plt.show()