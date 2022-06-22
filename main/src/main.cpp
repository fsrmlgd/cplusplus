#include <matplot/matplot.h>

int main() {
    using namespace matplot;

    auto [x, y, z] = peaks();
    contourf(x, y, z);
    show();
    save("img/contour.gif");

    return 0;
}
