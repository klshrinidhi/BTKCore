# Include directories for other projects installed on the system.
SET(BTK_INCLUDE_DIRS_SYSTEM "")

SET(BTK_INCLUDE_DIRS_SYSTEM ${EIGEN2_INCLUDE_DIR})

# Include directories from the build tree.
SET(BTK_INCLUDE_DIRS_BUILD_TREE ${BTK_BINARY_DIR})

# These directories are always needed.
SET(BTK_INCLUDE_DIRS_BUILD_TREE ${BTK_INCLUDE_DIRS_BUILD_TREE}
  ${BTK_SOURCE_DIR}/Code/BasicFilters
  ${BTK_SOURCE_DIR}/Code/Common
  ${BTK_SOURCE_DIR}/Code/IO
)

# Include directories from the install tree.
SET(BTK_INSTALL_INCLUDE_PATH "${CMAKE_INSTALL_PREFIX}${BTK_INSTALL_INCLUDE_DIR}")
SET(BTK_INCLUDE_RELATIVE_DIRS ${BTK_INCLUDE_RELATIVE_DIRS}
  BasicFilters
  Common
  IO
  Utilities
)

IF(NOT BTK_USE_SYSTEM_EIGEN2)
  SET(BTK_INCLUDE_RELATIVE_DIRS ${BTK_INCLUDE_RELATIVE_DIRS}
    eigen2)
ENDIF(NOT BTK_USE_SYSTEM_EIGEN2)

