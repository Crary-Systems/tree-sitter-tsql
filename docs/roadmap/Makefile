TEMPLATE = roadmap.m4
OUTPUT = build/roadmap.dot

.PHONY: all clean

all : $(OUTPUT)

$(OUTPUT): $(TEMPLATE)
	m4 $(TEMPLATE) > $(OUTPUT); dot -Tsvg $(OUTPUT) -o build/roadmap.svg; dot -Tsvg misc/legend.dot -o build/legend.svg

clean:
	rm -f $(OUTPUT) build/roadmap.svg build/legend.svg
