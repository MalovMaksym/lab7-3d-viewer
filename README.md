# My3DViewer

Початкова структура навчального проєкту 3D-вьювера на C++17. Ця версія перевіряє підключення GLM і GLFW та підготовлює збірку через CMake. Створення вікна й рендеринг OpenGL будуть додані в наступній лабораторній.

## Залежності

- CMake 3.20 або новіший
- компілятор C++17
- vcpkg
- GLM
- GLFW

GLAD буде потрібен для рендерингу OpenGL у наступному етапі; поточний приклад його ще не використовує.

## Встановлення бібліотек у Windows

У терміналі з папки vcpkg встанови залежності:

```powershell
.\vcpkg.exe install glm glfw3 --triplet x64-windows
```

## Конфігурація та збірка

З кореневої папки цього проєкту виконай команди, замінивши шлях до `vcpkg.cmake` на свій:

```powershell
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="C:/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake"
cmake --build build --config Debug
```

Запусти програму:

```powershell
./build/Debug/My3DViewer.exe
```

Очікуваний результат у консолі — координати вектора та повідомлення про успішну ініціалізацію GLFW. На цьому етапі графічне вікно ще не створюється.

## Структура

```text
My3DViewer/
├── .github/workflows/ci.yml
├── src/main.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md
```
