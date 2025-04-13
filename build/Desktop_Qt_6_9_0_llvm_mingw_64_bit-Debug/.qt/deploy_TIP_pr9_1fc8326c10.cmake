include("H:/projects/TIP-pr9/build/Desktop_Qt_6_9_0_llvm_mingw_64_bit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/TIP-pr9-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE H:/projects/TIP-pr9/build/Desktop_Qt_6_9_0_llvm_mingw_64_bit-Debug/TIP-pr9.exe
    GENERATE_QT_CONF
)
