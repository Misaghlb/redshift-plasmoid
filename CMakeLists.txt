project(redshift-plasmoid)

find_package(KDE4 REQUIRED)
include(KDE4Defaults)
include_directories(${KDE4_INCLUDES})

add_subdirectory(src)
add_subdirectory(icons)
add_subdirectory(po)
