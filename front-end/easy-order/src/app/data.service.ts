import { Injectable } from '@angular/core';
import {HttpClient } from "@angular/common/http";
import { Observable } from "rxjs";

@Injectable({
  providedIn: 'root'
})
export class DataService {

  constructor(private http: HttpClient ) {}

  fetchData(): Observable<any> {
    return this.http.get<any>('https://localhost:7282/api/Country');
  }
}
