.PHONY: clean All

All:
	@echo "----------Building project:[ CProject - Debug ]----------"
	@cd "CProject" && "$(MAKE)" -f  "CProject.mk"
clean:
	@echo "----------Cleaning project:[ CProject - Debug ]----------"
	@cd "CProject" && "$(MAKE)" -f  "CProject.mk" clean
