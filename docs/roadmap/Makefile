TEMPLATE = roadmap.m4
OUTPUT = build/roadmap.dot

.PHONY: all clean test

all : $(OUTPUT)

$(OUTPUT): $(TEMPLATE) test
	m4 $(TEMPLATE) > $(OUTPUT); dot -Tsvg $(OUTPUT) -o build/roadmap.svg; dot -Tsvg misc/legend.dot -o build/legend.svg

test :
	./test/test-rhs.sh && ./test/test-includes.sh

clean:
	rm -f $(OUTPUT) build/roadmap.svg build/legend.svg
