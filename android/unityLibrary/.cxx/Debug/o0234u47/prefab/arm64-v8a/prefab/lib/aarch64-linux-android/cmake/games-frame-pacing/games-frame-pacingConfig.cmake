if(NOT TARGET games-frame-pacing::swappy)
add_library(games-frame-pacing::swappy SHARED IMPORTED)
set_target_properties(games-frame-pacing::swappy PROPERTIES
    IMPORTED_LOCATION "C:/Users/robin/.gradle/caches/transforms-3/979ef22614b81eabbecff5078964258b/transformed/jetified-games-frame-pacing-1.10.0/prefab/modules/swappy/libs/android.arm64-v8a_API24_NDK23_cpp_shared_Release/libswappy.so"
    INTERFACE_INCLUDE_DIRECTORIES "C:/Users/robin/.gradle/caches/transforms-3/979ef22614b81eabbecff5078964258b/transformed/jetified-games-frame-pacing-1.10.0/prefab/modules/swappy/include"
    INTERFACE_LINK_LIBRARIES ""
)
endif()

if(NOT TARGET games-frame-pacing::swappy_static)
add_library(games-frame-pacing::swappy_static STATIC IMPORTED)
set_target_properties(games-frame-pacing::swappy_static PROPERTIES
    IMPORTED_LOCATION "C:/Users/robin/.gradle/caches/transforms-3/979ef22614b81eabbecff5078964258b/transformed/jetified-games-frame-pacing-1.10.0/prefab/modules/swappy_static/libs/android.arm64-v8a_API24_NDK23_cpp_shared_Release/libswappy.a"
    INTERFACE_INCLUDE_DIRECTORIES "C:/Users/robin/.gradle/caches/transforms-3/979ef22614b81eabbecff5078964258b/transformed/jetified-games-frame-pacing-1.10.0/prefab/modules/swappy_static/include"
    INTERFACE_LINK_LIBRARIES ""
)
endif()

