find_package(Boost)
if (Boost_FOUND)

	include_directories(
		${computor_SOURCE_DIR}/src
		${Boost_INCLUDE_DIRS}
	)

	add_executable(computor_test
		complex_test.cpp
		main.cpp
		number_test.cpp
	)

	target_link_libraries(computor_test
		complex
		number
	)

	# add_test(NAME computor_test COMMAND computor_test)
endif()