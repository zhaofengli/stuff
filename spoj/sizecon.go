package main
import f "fmt"
func main() {
	var t, i, s int
	for f.Scan( &t ); t > 0; t-- {
		f.Scan( &i )
		if i > 0 {
			s += i
		}
	}
	f.Println( s )
}
