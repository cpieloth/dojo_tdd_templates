PYTHON=python3

all:
	@echo "make test        - Run unit tests."
	@echo ""
	@echo "make clean         - Clean generated files."

test: test_unit

test_unit:
	$(PYTHON) -m unittest discover tests/

clean:
	find . -name '*.pyc' -delete